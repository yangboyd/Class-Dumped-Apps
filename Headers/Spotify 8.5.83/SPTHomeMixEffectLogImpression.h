//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHomeMixEffect.h"

@protocol SPTUBIImpressionEvent;

@interface SPTHomeMixEffectLogImpression : SPTHomeMixEffect
{
    id <SPTUBIImpressionEvent> _ubiImpression;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIImpressionEvent> ubiImpression; // @synthesize ubiImpression=_ubiImpression;
- (id)initWithUbiImpression:(id)arg1;

@end

