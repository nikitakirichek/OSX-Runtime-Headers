//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@class NSArray;

@interface NSToolbarItemGroup : NSToolbarItem
{
    id _groupItems;
    struct {
        unsigned int dirtiedLayout:1;
        unsigned int reserved:31;
    } _giFlags;
    id _giReserved;
}

- (id)_menuFormRepresentationForOverflowMenu;
- (id)menuFormRepresentation;
- (id)_selectableToolbarViews;
- (id)_initialViewToSelectFromDirection:(long long)arg1;
- (BOOL)_isEnabledAndHasEnabledSubitem;
- (id)_buttonAtIndex:(unsigned long long)arg1;
- (void)invalidateLayout;
- (void)_itemLayoutChanged;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (void)_setItemViewer:(id)arg1;
- (void)_collectItemRectsForViews:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3 controlBounds:(struct CGRect)arg4;
- (void)_collectItemRectsForViews:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3;
- (void)_collectItemRectsForLabels:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3 controlBounds:(struct CGRect)arg4;
- (void)_collectItemRectsForLabels:(struct CGRect *)arg1 count:(unsigned long long)arg2 inBounds:(struct CGRect)arg3;
- (BOOL)_viewIsEnabledAtIndex:(long long)arg1;
- (id)_itemAtViewIndex:(long long)arg1;
- (id)_itemAtLabelIndex:(long long)arg1;
- (id)_applicableLabelsArrayForDisplayMode:(unsigned long long)arg1 isInPalette:(BOOL)arg2;
- (BOOL)_applicableLabelIsEnabledAtIndex:(long long)arg1 forDisplayMode:(unsigned long long)arg2 isInPalette:(BOOL)arg3;
- (id)_viewsArray;
- (struct CGRect)rectForItem:(id)arg1 inBounds:(struct CGRect)arg2 controlBounds:(struct CGRect)arg3;
- (struct CGRect)rectForItem:(id)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_labelOnlyModeRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_segmentedControlRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2 controlBounds:(struct CGRect)arg3;
- (struct CGRect)_segmentedControlRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)_evenlySpacedRectForItemAtIndex:(long long)arg1 inBounds:(struct CGRect)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSArray *subitems;
- (void)_forceSetView:(id)arg1;
- (void)_autorecalculateMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2;
- (void)_sizeFromSubitemsMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2;
- (BOOL)_mouseDownInSurroundingRegionShouldMoveWindow;
- (void)dealloc;
- (id)view;
- (void)validate;
- (id)_defaultGroupViewIfUsed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1;
- (BOOL)_isCustomItemType;
- (double)_interlabelPadding;
- (double)_interviewPadding;
- (id)_allocDefaultView;

@end
