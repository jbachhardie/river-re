open Snabbdom.Base;

/* Define a function that returns a new virtual dom node */
let view = (title) =>
  h(
    "div",
    [
      style("box-shadow", "0px 0px 10px black"),
      children([
        h("h1", [text("Hello, " ++ (title ++ "!"))]),
        h(
          "ol",
          [
            children([
              h("li", [text("Item 1")]),
              h("li", [text("Item 2")]),
              h("li", [text("Item 3")])
            ])
          ]
        )
      ])
    ]
  );

/* Create a patch function from an array of Snabbdom modules */
let patch = init([|module_style|]);

/* Patch a dom element with id "#app" to the new virtual dom node */
let () = patch(Snabbdom.VNode.from_dom_id("app"), view("Snabbdom"));
