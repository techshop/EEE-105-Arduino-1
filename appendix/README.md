# Techshop EEE-201: Basic programming


## Appendix

In this appendix we will quickly cover how to use a [breadboard](https://en.wikipedia.org/wiki/Breadboard); knowing how to use one correctly will be really important in the coming chapters.

An electronics breadboard (as opposed to the type on which sandwiches are made) is actually referring to a solderless breadboard. These are great units for making temporary circuits and prototyping, and they require absolutely no soldering.

Prototyping is the process of testing out an idea by creating a preliminary model from which other forms are developed or copied, and it is one of the most common uses for breadboards. If you aren’t sure how a circuit will react under a given set of parameters, it’s best to build a prototype and test it out.

For those new to electronics and circuits, breadboards are often the best place to start. That is the real beauty of breadboards–they can house both the simplest circuit as well as very complex circuits. As you’ll see later in this tutorial, if your circuit outgrows its current breadboard, others can be be attached to accommodate circuits of all sizes and complexities.

We will be using breadboards to build circuits; in this class, we will often use circuit diagrams as a reference for building those circuits.  The following document will guide you through the basics of circuit diagrams; it is meant as a starting guide for orienting yourself in some of the diagrams you'll expect to see in this course. 

*The content is adapted from [Sparkfun: How to Read a Schematic](https://learn.sparkfun.com/tutorials/how-to-read-a-schematic/schematic-symbols-part-1)*


## Table of Contents

* [How breadboards work](#how-breadboards-work)
* [Circuit Diagram Introduction](#circuit-diagram-introduction)
* [Schematic Symbols (Part 1)](#schematic-symbols-part-1)
  * [Resistors](#resistors)
    * [Potentiometers and Variable Resistors](#potentiometers-and-variable-resistors)
  * [Capacitors](#capacitors)
  * [Inductors](#inductors)
  * [Switches](#switches)
  * [Power Sources](#power-sources)
    * [DC or AC Voltage Sources](#dc-or-ac-voltage-sources)
    * [Batteries](#batteries)
    * [Voltage Nodes](#voltage-nodes)
* [Schematic Symbols (Part 2)](#schematic-symbols-part-2)
  * [Diodes](#diodes)
  * [Transistors](#transistors)
    * [Bipolar Junction Transistors (BJTs)](#bipolar-junction-transistors-bjts)
    * [Metal Oxide Field-Effect Transistors (MOSFETs)](#metal-oxide-field-effect-transistors-mosfets)
  * [Digital Logic Gates](#digital-logic-gates)
  * [Integrated Circuits](#integrated-circuits)
  * [Unique ICs: Op Amps, Voltage Regulators](#unique-ics-op-amps-voltage-regulators)
  * [Miscellany](#miscellany)
    * [Crystals and Resonators](#crystals-and-resonators)
    * [Headers and Connectors](#headers-and-connectors)
    * [Motors, Transformers, Speakers, and Relays](#motors-transformers-speakers-and-relays)
    * [Fuses and PTCs](#fuses-and-ptcs)
* [Reading Schematics](#reading-schematics)
  * [Nets, Nodes and Labels](#nets-nodes-and-labels)
    * [Junctions and Nodes](#junctions-and-nodes)
    * [Net Names](#net-names)
* [Schematic Reading Tips](#schematic-reading-tips)
  * [Identify Blocks](#identify-blocks)
  * [Recognize Voltage Nodes](#recognize-voltage-nodes)
  * [Reference Component Datasheets](#reference-component-datasheets)

## How breadboards work

!["Bread board"](https://cdn.sparkfun.com/assets/d/c/a/b/4/513a1dface395fa524000001.JPG)

Here we have a breadboard where the adhesive backing has been removed. You can see lots of horizontal rows of metal strips on the bottom of the breadboard.

The tops of the metal rows have little clips that hide under the plastic holes. These clips allow you to stick a wire or the leg of a component into the exposed holes on a breadboard, which then hold it in place.

Once inserted that component will be electrically connected to anything else placed in that row. This is because the metal rows are conductive and allow current to flow from any point in that strip.

Notice that there are only five clips on this strip. This is typical on almost all breadboards. Thus, you can only have up to five components connected in one particular section of the breadboard. The row has ten holes, so why can you only connect five components? You’ll also notice that each horizontal row is separated by a ravine, or crevasse, in the middle of the breadboard. This ravine isolates both sides of a given row from one another, and they are not electrically connected. We won't discuss the purpose of this just yet, but, for now, just know that each side of a given row is disconnected from the other, leaving you with five spots for components on either side.

!["LED"](https://cdn.sparkfun.com/assets/1/b/b/3/a/518c07b8ce395f7962000000.jpg)

Aside from horizontal rows, breadboards usually have what are called power rails that run vertically along the sides.

!["Bread board"](https://cdn.sparkfun.com/assets/3/d/f/a/9/518c0b34ce395fea62000002.jpg)

These power rails are metal strips that are identical to the ones that run horizontally, except they are, typically\*, all connected. When building a circuit, you tend to need power in lots of different places. The power rails give you lots of easy access to power wherever you need it in your circuit. Usually they will be labeled with a ‘+’ and a ‘-’ and have a red and blue or black stripe, to indicate the positive and negative side.

It is important to be aware that the power rails on either side are not connected, so if you want the same power source on both sides, you will need to connect the two sides with some jumper wires. Keep in mind that the markings are there just as a reference. There is no rule that says you have to plug power into the ‘+’ rail and ground into the ‘-'rail, though it’s good practice to keep everything in order.


## Circuit Diagram Introduction

Schematics are our map to designing, building, and troubleshooting circuits. Understanding how to read and follow schematics is an important skill for any electronics engineer.

This tutorial should turn you into a fully literate schematic reader! We’ll go over all of the fundamental schematic symbols:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/6/8/6/d/1/51cdc767ce395f7558000002.png">
</p>

Then we’ll talk about how those symbols are connected on schematics to create a model of a circuit. We’ll also go over a few tips and tricks to watch out for.


## Schematic Symbols (Part 1)
Are you ready for a barrage of circuit components? Here are some of the standardized, basic schematic symbols for various components.

### Resistors

The most fundamental of circuit components and symbols! Resistors on a schematic are usually represented by a few zig-zag lines, with two terminals extending outward. Schematics using international symbols may instead use a featureless rectangle, instead of the squiggles.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/2/2/6/9/c/51cc9e55ce395f576d000000.png">
</p>

#### Potentiometers and Variable Resistors

Variable resistors and potentiometers each augment the standard resistor symbol with an arrow. The variable resistor remains a two-terminal device, so the arrow is just laid diagonally across the middle. A potentiometer is a three-terminal device, so the arrow becomes the third terminal (the wiper).

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/4/5/c/a/0/51cc9e55ce395fad69000001.png">
</p>

### Capacitors

There are two commonly used capacitor symbols. One symbol represents a polarized (usually electrolytic or tantalum) capacitor, and the other is for non-polarized caps. In each case there are two terminals, running perpendicularly into plates.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/9/c/9/c/5/51cc9e55ce395fcd6c000000.png">
</p>

The symbol with one curved plate indicates that the capacitor is polarized. The curved plate represents the cathode of the capacitor, which should be at a lower voltage than the positive, anode pin. A plus sign might also be added to the positive pin of the polarized capacitor symbol.

### Inductors

Inductors are usually represented by either a series of curved bumps, or loopy coils. International symbols may just define an inductor as a filled-in rectangle.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/3/f/a/4/0/51cca0f8ce395fa06c000001.png">
</p>

### Switches

Switches exist in many different forms. The most basic switch, a single-pole/single-throw (SPST), is two terminals with a half-connected line representing the actuator (the part that connects the terminals together).

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/3/5/4/2/a/51cc9e55ce395fa969000002.png">
</p>

Switches with more than one throw, like the SPDT and SP3T below, add more landing spots for the the actuator.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/f/a/b/3/3/51cc9e55ce395f7a6c000001.png">
</p>

Switches with multiple poles, usually have multiple, alike switches with a dotted line intersecting the middle actuator.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/0/a/4/0/7/51cc9e55ce395fb072000000.png">
</p>

### Power Sources

Just as there are many options out there for powering your project, there are a wide variety of power source circuit symbols to help specify the power source.

#### DC or AC Voltage Sources

Most of the time when working with electronics, you’ll be using constant voltage sources. We can use either of these two symbols to define whether the source is supplying direct current (DC) or alternating current (AC):

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/4/7/b/0/3/51cc9e55ce395f8f6d000001.png">
</p>

#### Batteries

Batteries, whether they’re those cylindrical, alkaline AA’s or rechargeable lithium-polymers, usually look like a pair of disproportionate, parallel lines:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/b/a/5/0/8/51cc9e54ce395ff06d000001.png">
</p>

More pairs of lines usually indicates more series cells in the battery. Also, the longer line is usually used to represent the positive terminal, while the shorter line connects to the negative terminal.

#### Voltage Nodes

Sometimes – on really busy schematics especially – you can assign special symbols to node voltages. You can connect devices to these one-terminal symbols, and it’ll be tied directly to 5V, 3.3V, VCC, or GND (ground). Positive voltage nodes are usually indicated by an arrow pointing up, while ground nodes usually involve one to three flat lines (or sometimes a down-pointing arrow or triangle).

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/f/7/5/4/2/51cc9e55ce395fcc74000000.png">
</p>


## Schematic Symbols (Part 2)

### Diodes

Basic diodes are usually represented with a triangle pressed up against a line. Diodes are also polarized, so each of the two terminals require distinguishing identifiers. The positive, anode is the terminal running into the flat edge of the triangle. The negative, cathode extends out of the line in the symbol (think of it as a - sign).

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/2/2/a/b/a/51cc9e56ce395fad6c000002.png">
</p>

There are a all sorts of different types of diodes, each of which has a special riff on the standard diode symbol. Light-emitting diodes (LEDs) augment the diode symbol with a couple lines pointing away. Photodiodes, which generate energy from light (basically, tiny solar cells), flip the arrows around and point them toward the diode.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/c/5/7/4/4/51cca2cace395f5e6d000000.png">
</p>

Other special types of diodes, like Schottky’s or zeners, have their own symbols, with slight variations on the bar part of the symbol.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/1/6/9/2/0/51cca2cace395f6369000000.png">
</p>

### Transistors

Transistors, whether they’re BJTs or MOSFETs, can exist in two configurations: positively doped, or negatively doped. So for each of these types of transistor, there are at least two ways to draw it.

#### Bipolar Junction Transistors (BJTs)

BJTs are three-terminal devices; they have a collector (C), emitter (E), and a base (B). There are two types of BJTs – NPNs and PNPs – and each has its own unique symbol.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/9/8/4/c/5/51cca2f8ce395f6469000000.png">
</p>

The collector (C) and emitter (E) pins are both in-line with each other, but the emitter should always have an arrow on it. If the arrow is pointing inward, it’s a PNP, and, if the arrow is pointing outward, it’s an NPN. A mnemonic for remembering which is which is “NPN: not pointing in.”

#### Metal Oxide Field-Effect Transistors (MOSFETs)

Like BJTs, MOSFETs have three terminals, but this time they’re named source (S), drain (D), and gate (G). And again, there are two different versions of the symbol, depending on whether you’ve got an n-channel or p-channel MOSFET. There are a number of commonly used symbols for each of the MOSFET types:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/d/f/6/3/d/51cc9e55ce395fea4b000000.png">
</p>

The arrow in the middle of the symbol (called the bulk) defines whether the MOSFET is n-channel or p-channel. If the arrow is pointing in means it’s a n-channel MOSFET, and if it’s pointing out it’s a p-channel. Remember: “n is in” (kind of the opposite of the NPN mnemonic).

### Digital Logic Gates

Our standard logic functions – AND, OR, NOT, and XOR – all have unique schematic symbols:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/3/5/8/2/d/51cc9e54ce395f7e69000000.png">
</p>

Adding a bubble to the output negates the function, creating NANDs, NORs, and XNORs:
<p align="center">
    <img src="https://cdn.sparkfun.com/assets/7/c/8/e/9/51cc9e55ce395f856d000000.png">
</p>

Negated logic gates

They may have more than two inputs, but the shapes should remain the same (well, maybe a bit bigger), and there should still only be one output.

### Integrated Circuits

Integrated circuits accomplish such unique tasks, and are so numerous, that they don’t really get a unique circuit symbol. Usually, an integrated circuit is represented by a rectangle, with pins extending out of the sides. Each pin should be labeled with both a number, and a function.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/7/c/8/e/9/51cc9e55ce395f856d000000.png">
</p>

Schematic symbols for an ATmega328 microcontroller (commonly found on Arduinos), an ATSHA204 encryption IC, and an ATtiny45 MCU. As you can see, these components greatly vary in size and pin-counts.

Because ICs have such a generic circuit symbol, the names, values and labels become very important. Each IC should have a value precisely identifying the name of the chip.

### Unique ICs: Op Amps, Voltage Regulators

Some of the more common integrated circuits do get a unique circuit symbol. You’ll usually see operation amplifiers laid out like below, with 5 total terminals: a non-inverting input (+), inverting input (-), output, and two power inputs.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/d/6/9/6/4/51cca328ce395f666d000001.png">
</p>

Often, there will be two op amps built into one IC package requiring only one pin for power and one for ground, which is why the one on the right only has three pins.

Simple voltage regulators are usually three-terminal components with input, output and ground (or adjust) pins. These usually take the shape of a rectangle with pins on the left (input), right (output) and bottom (ground/adjust).

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/8/3/5/4/4/51cca328ce395f7a69000000.png">
</p>

### Miscellany

#### Crystals and Resonators

Crystals or resonators are usually a critical part of microcontroller circuits. They help provide a clock signal. Crystal symbols usually have two terminals, while resonators, which add two capacitors to the crystal, usually have three terminals.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/a/e/5/6/f/51ccac08ce395f776c000000.png">
</p>

#### Headers and Connectors

Whether it’s for providing power, or sending out information, connectors are a requirement on most circuits. These symbols vary depending on what the connector looks like, here’s a sampling:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/e/3/7/a/d/51ccac08ce395f6569000000.png">
</p>

#### Motors, Transformers, Speakers, and Relays

We’ll lump these together, since they (mostly) all make use of coils in some way. Transformers (not the more-than-meets-the-eye kind) usually involve two coils, butted up against each other, with a couple lines separating them:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/f/b/e/a/f/51ccac08ce395fe06d000001.png">
</p>
Relays usually pair a coil with a switch:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/d/8/b/2/4/51ccac08ce395fac6d000001.png">
</p>

Speakers and buzzers usually take a form similar to their real-life counterparts:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/2/9/a/a/6/51ccac08ce395f8c2b000002.png">
</p>

And motors generally involve an encircled “M”, sometimes with a bit more embellishment around the terminals:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/9/4/2/8/6/51ccac09ce395fc96c000001.png">
</p>

#### Fuses and PTCs

Fuses and PTCs – devices which are generally used to limit large inrushes of current – each have their own unique symbol:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/1/a/1/d/2/51ccac08ce395fb16d000000.png">
</p>

The PTC symbol is actually the generic symbol for a thermistor, a temperature-dependent resistor (notice the international resistor symbol in there?).


## Reading Schematics
Understanding which components are which on a schematic is more than half the battle towards comprehending it. Now all that remains is identifying how all of the symbols are connected together.

### Nets, Nodes and Labels

Schematic nets tell you how components are wired together in a circuit. Nets are represented as lines between component terminals. Sometimes (but not always) they’re a unique color, like the green lines in this schematic:

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/d/2/9/c/c/51cdbd5fce395fc80b000000.png">
</p>

#### Junctions and Nodes

Wires can connect two terminals together, or they can connect dozens. When a wire splits into two directions, it creates a junction. We represent junctions on schematics with nodes, little dots placed at the intersection of the wires.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/7/d/2/c/8/51cdb29dce395fa40b000000.png">
</p>

Nodes give us a way to say that “wires crossing this junction are connected”. The absences of a node at a junction means two separate wires are just passing by, not forming any sort of connection. (When designing schematics, it’s usually good practice to avoid these non-connected overlaps wherever possible, but sometimes it’s unavoidable).

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/0/1/7/4/5/51cdb378ce395f4309000000.png">
</p>

#### Net Names

Sometimes, to make schematics more legible, we’ll give a net a name and label it, rather than routing a wire all over the schematic. Nets with the same name are assumed to be connected, even though there isn’t a visible wire connecting them. Names can either be written directly on top of the net, or they can be “tags”, hanging off the wire.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/6/0/2/4/e/51cdb9d0ce395f2c0b000000.png">
</p>

Each net with the same name is connected, as in this schematic for an FT231X Breakout Board. Names and labels help keep schematics from getting too chaotic (imagine if all those nets were actually connected with wires).

Nets are usually given a name that specifically states the purpose of signals on that wire. For example, power nets might be labeled “VCC” or “5V”, while serial communication nets might be labeled “RX” or “TX”.

## Schematic Reading Tips

### Identify Blocks

Truly expansive schematics should be split into functional blocks. There might be a section for power input and voltage regulation, or a microcontroller section, or a section devoted to connectors. Try recognizing which sections are which, and following the flow of circuit from input to output. Really good schematic designers might even lay the circuit out like a book, inputs on the left side, outputs on the right.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/8/a/3/9/0/51cdbe19ce395f160b000001.png">
</p>

If the drawer of a schematic is really nice (like the engineer who designed this schematic for the RedBoard), they may separate sections of a schematic into logical, labeled blocks.

### Recognize Voltage Nodes

Voltage nodes are single-terminal schematic components, which we can connect component terminals to in order to assign them to a specific voltage level. These are a special application of net names, meaning all terminals connected to a like-named voltage node are connected together.

<p align="center">
    <img src="https://cdn.sparkfun.com/assets/1/e/8/c/c/51cdc629ce395f6b4f000000.png">
</p>

Like-named voltage nodes – like GND, 5V, and 3.3V – are all connected to their counterparts, even if there aren’t wires between them.

The ground voltage node is especially useful, because so many components need a connection to ground.

### Reference Component Datasheets

If there’s something on a schematic that just doesn’t make sense, try finding a datasheet for the most important component. Usually the component doing the most work on a circuit is an integrated circuit, like a microcontroller or sensor. These are usually the largest component, oft-located at the center of the schematic.
