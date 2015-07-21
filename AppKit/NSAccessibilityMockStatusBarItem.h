//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAccessibilityMockUIElement.h>

@class NSStatusItem;

@interface NSAccessibilityMockStatusBarItem : NSAccessibilityMockUIElement
{
    NSStatusItem *_statusItem;
}

@property(nonatomic) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)hash;
- (id)_accessibilitySourceCell;
- (id)_accessibilitySourceView;

@end
