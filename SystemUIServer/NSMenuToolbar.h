//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMenu, NSMenuToolbarItem, NSMenuToolbarView, NSMutableArray, NSMutableData, NSStatusItem;

@interface NSMenuToolbar : NSObject
{
    _Bool _draggedToSelf;
    _Bool _animating;
    _Bool _resizeAfterAnimation;
    _Bool _darkMode;
    unsigned int _statusItemWindow;
    unsigned int _statusItemConnection;
    id <NSMenuToolbarDelegate> _delegate;
    NSMenuToolbarItem *_draggedItem;
    NSMenuToolbarView *_toolbarView;
    NSMenu *_currentMenu;
    NSMenuToolbarItem *_currentMenuItem;
    NSStatusItem *_statusItem;
    NSMutableArray *_toolbarItems;
    NSMutableData *_toolbarItemOffsets;
    NSMenuToolbarItem *_gapItem;
    unsigned long long _layoutCounter;
    struct CGPoint _lastDragPt;
}

+ (id)defaultMenuToolbar;
@property(nonatomic) unsigned int statusItemConnection; // @synthesize statusItemConnection=_statusItemConnection;
@property(nonatomic) unsigned int statusItemWindow; // @synthesize statusItemWindow=_statusItemWindow;
@property(nonatomic) unsigned long long layoutCounter; // @synthesize layoutCounter=_layoutCounter;
@property(nonatomic) struct CGPoint lastDragPt; // @synthesize lastDragPt=_lastDragPt;
@property(retain, nonatomic) NSMenuToolbarItem *gapItem; // @synthesize gapItem=_gapItem;
@property(retain, nonatomic) NSMutableData *toolbarItemOffsets; // @synthesize toolbarItemOffsets=_toolbarItemOffsets;
@property(retain, nonatomic) NSMutableArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain, nonatomic) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
@property(readonly, nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) _Bool resizeAfterAnimation; // @synthesize resizeAfterAnimation=_resizeAfterAnimation;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) __weak NSMenuToolbarItem *currentMenuItem; // @synthesize currentMenuItem=_currentMenuItem;
@property(nonatomic) __weak NSMenu *currentMenu; // @synthesize currentMenu=_currentMenu;
@property(readonly, nonatomic) _Bool draggedToSelf; // @synthesize draggedToSelf=_draggedToSelf;
@property(readonly, nonatomic) NSMenuToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) NSMenuToolbarItem *draggedItem; // @synthesize draggedItem=_draggedItem;
@property(nonatomic) __weak id <NSMenuToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_appearanceThemeChanged:(id)arg1;
- (void)showStatusItem;
- (void)_handleCtrlF8;
- (BOOL)accessibilityPerformCancel;
@property(copy, nonatomic) NSArray *accessibilitySelectedChildren;
@property(readonly, copy, nonatomic) NSArray *accessibilityChildren;
- (id)accessibilityElementForGlobalPoint:(struct CGPoint)arg1;
- (BOOL)_keyNavDown;
- (BOOL)_keyNavUp;
- (void)_keyNavRight;
- (void)_keyNavLeft;
- (void)_keyNav:(_Bool)arg1;
- (id)axSize:(id)arg1;
- (id)axPosition:(id)arg1;
- (void)clearMenuItemHighlights;
- (void)axPopUpMenu:(id)arg1 displayMenu:(_Bool)arg2;
- (void)axPopupMenu:(id)arg1;
- (void)axSelectMenu:(id)arg1 selected:(BOOL)arg2;
- (void)cancelMenu:(id)arg1;
- (void)_SUISCancelMenuTracking;
- (_Bool)popUpMenu:(id)arg1 menu:(id)arg2 displayMenu:(_Bool)arg3 keyboardNav:(_Bool)arg4;
- (void)drawMenuBackground:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (id)_itemFromPt:(struct CGPoint)arg1;
- (BOOL)handleMouseDown:(struct CGPoint)arg1;
- (void)removeItemContainingExtra:(id)arg1;
- (unsigned long long)positionOfExtra:(id)arg1;
- (id)createMenuExtra:(id)arg1 atPosition:(unsigned long long)arg2;
- (void)_displayChanged;
- (void)_endMenuTracking:(id)arg1;
- (void)_beginMenuTracking:(id)arg1;
- (void)relayout;
- (struct CGRect)_computeFrameForInsertionIndex:(unsigned long long)arg1 withWidth:(double)arg2;
- (void)_updateDragInsertion:(id)arg1;
- (float)_computeTravelTimeForInsertionOfItem:(id)arg1;
- (void)_stopUpdateInsertionAnimation;
- (void)_beginUpdateInsertionAnimation;
- (unsigned long long)_insertionIndexForPoint:(struct CGPoint)arg1 previousIndex:(unsigned long long)arg2;
- (id)itemAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectOfItemAtIndex:(int)arg1;
- (void)addItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMenuExtras:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)acceptsDrag:(id)arg1;
- (void)dropItemAtPoint:(struct CGPoint)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)dragExited:(id)arg1;
- (unsigned long long)dragMoved:(id)arg1;
- (unsigned long long)dragEntered:(id)arg1;
- (id)_accessibilityElement;

@end

