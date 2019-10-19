//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCDynamicCaptionTextColor, SCDynamicCaptionTextShadow;

@interface SCDynamicCaptionBackgroundStyle : NSObject <NSCopying, NSCoding>
{
    SCDynamicCaptionTextColor *_backgroundColor;
    SCDynamicCaptionTextShadow *_boxShadow;
    double _borderRadius;
}

@property(readonly, nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextShadow *boxShadow; // @synthesize boxShadow=_boxShadow;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 boxShadow:(id)arg2 borderRadius:(double)arg3;

@end

