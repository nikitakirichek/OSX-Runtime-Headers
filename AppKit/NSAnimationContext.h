//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction;

@interface NSAnimationContext : NSObject
{
}

+ (void)runAnimationGroup:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)endGrouping;
+ (void)beginGrouping;
+ (id)currentContext;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (void)resumeCompletionHandlers:(id)arg1;
+ (id)suspendCompletionHandlers;
+ (void)flush;
+ (void)activate;
+ (BOOL)_hasActiveGrouping;
+ (void)addCommitHandler:(CDUnknownBlockType)arg1;
+ (void)animationDidStart:(id)arg1;
- (void)endPerformanceMeasurementForIdentifier:(id)arg1;
- (void)beginPerformanceMeasurementForIdentifier:(id)arg1;
@property(copy) CDUnknownBlockType completionHandler;
@property(retain) CAMediaTimingFunction *timingFunction;
@property double duration;
- (void)setAllowsAsynchronousAnimation:(BOOL)arg1;
- (BOOL)allowsAsynchronousAnimation;
@property BOOL allowsImplicitAnimation;
- (id)autorelease;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)init;
- (BOOL)isExplicit;
- (BOOL)isImplicit;
- (BOOL)isActive;

@end

