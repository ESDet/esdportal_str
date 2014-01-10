(function($) {

Drupal.behaviors.sitevisitask_hideEmpties = {
  attach: function (context, settings) {
    $('.form-item-field-site-visit-status-und select', context).each(function() {
      if ($(this).children().length === 0) {
        $(this).hide();
      }
    });
  }
};

Drupal.behaviors.sitevisitask_hideExtras = {
  attach: function (context, settings) {
    $('.form-item-field-site-visit-status-und select', context).each(function() {
      $(this).parent().delegate('select', 'change', function(ev) {
        // reuse old scores yes
        var tid = $(this).val();
        if (tid !== null) {
          // set persistent var related to current school profile
          $(this).parents('article').data('oldval', tid);
        } else if ($(this).parents('article').data('oldval')) {
          tid = $(this).parents('article').data('oldval');
        }
        if (tid == 2289) {
          $(this).parents('article').find('.field--name-field--site-visit-reuse-reason').show();
        } else {
          $(this).parents('article').find('.field--name-field--site-visit-reuse-reason').hide();
        }

        // participating pending date selection
        if (tid == 2288) {
          $(this).parents('article').find('.field--name-field--site-visit-unavailability').show();
        } else {
          $(this).parents('article').find('.field--name-field--site-visit-unavailability').hide();
        }
      });
      $(this).trigger('change');
    });

    $('.field--name-field--site-visit-unavailability', context).each(function() {
      $(this).parents('article').find('.form-select').hide();
      var $thisField = $(this);
      var thisSubmitId = $(this).find('input:submit').attr('id');
      Drupal.ajax[thisSubmitId].options.success = function (response, status) {
        $thisField.parents('article').find('#edit-field-site-visit-status-und').val('2286');
        $thisField.parents('article').find('#edit-field-site-visit-status-und').trigger('change');
      }
    });
  }
};

})(this.jQuery);
