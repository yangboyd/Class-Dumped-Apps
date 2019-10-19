//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LOTKeyframeGroup;

@interface LOTMask : NSObject
{
    _Bool _closed;
    _Bool _inverted;
    unsigned long long _maskMode;
    LOTKeyframeGroup *_maskPath;
    LOTKeyframeGroup *_opacity;
    LOTKeyframeGroup *_expansion;
}

@property(readonly, nonatomic) LOTKeyframeGroup *expansion; // @synthesize expansion=_expansion;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *maskPath; // @synthesize maskPath=_maskPath;
@property(readonly, nonatomic) unsigned long long maskMode; // @synthesize maskMode=_maskMode;
@property(readonly, nonatomic) _Bool inverted; // @synthesize inverted=_inverted;
@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end

