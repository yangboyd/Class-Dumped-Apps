//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/NSCopying-Protocol.h>

@class DSCColor;

@interface DSCRippleRenderingData : NSObject <NSCopying>
{
    _Bool _shouldClip;
    DSCColor *_color;
    double _radius;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldClip; // @synthesize shouldClip=_shouldClip;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) DSCColor *color; // @synthesize color=_color;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 radius:(double)arg2 shouldClip:(_Bool)arg3;

@end

