//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCAdSnapBottomMedia, SCAdSnapTopMedia;

@interface SCAdSnapMediaV2 : NSObject <NSCopying, NSCoding>
{
    _Bool _isFromRenderData_DEPRECATING;
    SCAdSnapTopMedia *_topSnapMedia;
    SCAdSnapBottomMedia *_bottomSnapMedia;
}

@property(readonly, nonatomic) _Bool isFromRenderData_DEPRECATING; // @synthesize isFromRenderData_DEPRECATING=_isFromRenderData_DEPRECATING;
@property(readonly, copy, nonatomic) SCAdSnapBottomMedia *bottomSnapMedia; // @synthesize bottomSnapMedia=_bottomSnapMedia;
@property(readonly, copy, nonatomic) SCAdSnapTopMedia *topSnapMedia; // @synthesize topSnapMedia=_topSnapMedia;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopSnapMedia:(id)arg1 bottomSnapMedia:(id)arg2 isFromRenderData_DEPRECATING:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

