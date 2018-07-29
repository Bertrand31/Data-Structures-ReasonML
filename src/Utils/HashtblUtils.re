open Hashtbl;
let keys = (hashtbl: t('a, 'b)): list('a) => {
  fold((k, _, acc) => [k, ...acc], hashtbl, []);
};
