/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

@interface ECStatusLabelDescription : NSObject
{
    _Bool _usesDefaultPositioning;
    NSString *_string;
    struct CGRect _normalizedBounds;
    struct CGPoint _normalizedCenter;
    _Bool _hasImageResource;
}

+ (BOOL)statusLabelsEnabledForIdentifier:(id)arg1;
@property(nonatomic) _Bool hasImageResource; // @synthesize hasImageResource=_hasImageResource;
@property(readonly, nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(readonly, nonatomic) struct CGRect normalizedBounds; // @synthesize normalizedBounds=_normalizedBounds;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
//- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithString:(id)arg1 normalizedBounds:(struct CGRect)arg2 normalizedCenter:(struct CGPoint)arg3;
- (id)initWithDebugPositioningAndString:(id)arg1;
- (id)initWithDefaultPositioningAndString:(id)arg1;

@end
