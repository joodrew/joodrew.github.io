
$(document).ready(function () {
// CERTIFICADOS
  $('.jcert').slick({
    autoplay: true,
    autoplaySpeed: 1000,
    centerMode: true,
    adaptiveHeight: true,
    arrows: false,
    responsive: [
      {
        breakpoint: 5000,
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
//PROJETOS

});
