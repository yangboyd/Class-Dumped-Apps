//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRWAppSwitchingScenario.h"

@class GRWApp;

@interface GRWScenarioMapQuery : GRWAppSwitchingScenario
{
    GRWApp *_googleMapsApp;
    GRWApp *_wazeApp;
    GRWApp *_appleMapsApp;
    GRWApp *_safariApp;
}

@property(retain, nonatomic) GRWApp *safariApp; // @synthesize safariApp=_safariApp;
@property(retain, nonatomic) GRWApp *appleMapsApp; // @synthesize appleMapsApp=_appleMapsApp;
@property(retain, nonatomic) GRWApp *wazeApp; // @synthesize wazeApp=_wazeApp;
@property(retain, nonatomic) GRWApp *googleMapsApp; // @synthesize googleMapsApp=_googleMapsApp;
- (void).cxx_destruct;
- (_Bool)shouldRewriteMapsURL;
- (id)appToOpenIfAppSwitchingHeldBack;
- (_Bool)shouldPrompt;
- (id)initWithIntentDescriptor:(id)arg1 productsManager:(id)arg2 preferences:(id)arg3 cooldownManager:(id)arg4 impressionCounter:(id)arg5 linkOpenerOptions:(id)arg6;

@end

