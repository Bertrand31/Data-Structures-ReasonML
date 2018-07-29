open String;

let head = (str: string): char => get(str, 0);
let tail = (str: string): string => sub(str, 1, length(str) - 1);
let of_char = String.make(1);
let rec toArr = (str: string): list(char) => {
  switch(length(str)) {
  | 0 => []
  | 1 => [head(str)]
  | _ => [head(str), ...toArr(tail(str))]
  };
};
