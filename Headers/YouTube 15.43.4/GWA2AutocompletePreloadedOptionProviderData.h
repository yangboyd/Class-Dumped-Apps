//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2AutocompleteOptionProviderData.h>

@class NSMutableArray, ORCH2AutocompletePreloadedOptionProviderData;

@interface GWA2AutocompletePreloadedOptionProviderData : GWA2AutocompleteOptionProviderData
{
    ORCH2AutocompletePreloadedOptionProviderData *_preloadedOptionExtension;
    NSMutableArray *_options;
}

- (void).cxx_destruct;
- (void)fetchOptionsMatchingInput:(id)arg1 fieldID:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (id)providerAttributes;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

@end

