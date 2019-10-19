//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASElementMap, NSHashTable;

@protocol ASLayoutController <NSObject>
- (void)allElementsForScrolling:(unsigned char)arg1 rangeMode:(BOOL)arg2 displaySet:(id *)arg3 preloadSet:(id *)arg4 map:(ASElementMap *)arg5;
- (NSHashTable *)elementsForScrolling:(unsigned char)arg1 rangeMode:(BOOL)arg2 rangeType:(long long)arg3 map:(ASElementMap *)arg4;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(BOOL)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(BOOL)arg2 rangeType:(long long)arg3;
@end

