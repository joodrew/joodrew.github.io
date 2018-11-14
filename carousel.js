
$(document).ready(function () {

  $('.jcert').slick({
    autoplay: true,
    autoplaySpeed: 1000,
    centerMode: true,
    arrows: false,
    responsive: [
      {
        breakpoint: 1920,
        settings: {
          slidesToShow: 7
        }
      },
      {
        breakpoint: 920,
        settings: {
          slidesToShow: 6
        }
      },{
        breakpoint: 820,
        settings: {
          slidesToShow: 5
        }
      },
      {
        breakpoint: 720,
        settings: {
          slidesToShow: 4
        }
      },
      {
        breakpoint: 620,
        settings: {
          slidesToShow: 3
        }
      },
      {
        breakpoint: 520,
        settings: {
          slidesToShow: 2
        }
      }
    ]
  });
});
