/**
 * Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 * For licensing, see LICENSE.md or http://ckeditor.com/license
 */

// This file contains style definitions that can be used by CKEditor plugins.
//
// The most common use for it is the "stylescombo" plugin, which shows a combo
// in the editor toolbar, containing all styles. Other plugins instead, like
// the div plugin, use a subset of the styles on their feature.
//
// If you don't have plugins that depend on this file, you can simply ignore it.
// Otherwise it is strongly recommended to customize this file to match your
// website requirements and design properly.

CKEDITOR.stylesSet.add('default', [
	/* Inline Styles */
	{ name: 'Float right',		element: 'p', attributes: { 'class': 'float-right' } },
	{ name: 'No float',			element: 'p', attributes: { 'class': 'no-float' } },
	{ name: 'Source',			element: 'p', attributes: { 'class': 'source' } },
	/*{ name: 'Source center',	element: 'p', attributes: { 'class': 'source-center' } },*/
	{ name: 'Abstract',			element: 'p', attributes: { 'class': 'abstract' } },
	{ name: 'Figure title',		element: 'p', attributes: { 'class': 'figure-title' } },
	{ name: 'Topics',	    element: 'div', attributes: { 'class': 'topics' } },
	{ name: 'Block left',	    element: 'div', attributes: { 'class': 'block-left' } },
	{ name: 'Block full',	    element: 'div', attributes: { 'class': 'block-full' } },
	{ name: 'Block right',	    element: 'div', attributes: { 'class': 'block-right' } },
]);

