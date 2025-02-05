Какие из следующих инициализаций допустимы? Объясните почему

int i = -1, &r = 0; // Инициализация int i = -1 допустима
                    // Инициализация int &r = 0 не допустима, так как ссылки 
                    // всегда должны ссылаться на существующую переменную,
                    // а не на литерал

int *const p2 = &i2; // Инициализация допустима, если i2 определено ранее

const int i = -1; // Инициализация const int i = -1 допустима
const int &r = 0; // Инициализация допустима, т.к константная 
                  // ссылка может указывать на временное значение

const int *const p3 = &i2; // Инициализация допустима,если i2 определено ранее
                           // и является типом int

const int *p1 = &i2; // Инициализация допустима, если i2 определено ранее и
                     // является типом int 

const int &const r2; // Инициализация недопустима, т.к нужно инициализировать
                     // ссылку сразу
 
const int i2 = i; // Инициализация допустима
const int &r = i; // Инициализация допустима, если переменная i определена ранее
                  // и является типом int
  
