//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSDisplayCycleObserver : NSObject
{
    CDUnknownBlockType _updateConstraintsHandler;
    CDUnknownBlockType _layoutHandler;
    CDUnknownBlockType _displayHandler;
    CDUnknownBlockType _updateStructuralRegionsHandler;
}

@property BOOL needsUpdateStructuralRegions;
@property BOOL needsDisplay;
@property BOOL needsLayout;
@property BOOL needsUpdateConstraints;
@property(copy) CDUnknownBlockType updateStructuralRegionsHandler;
@property(copy) CDUnknownBlockType displayHandler;
@property(copy) CDUnknownBlockType layoutHandler;
@property(copy) CDUnknownBlockType updateConstraintsHandler;
- (void)dealloc;

@end

