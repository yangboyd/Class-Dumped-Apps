//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMESuggestionsCarrierInformationProvider;

@interface HMESmartHomeSuggestionFilter : NSObject
{
    id <HMESuggestionsCarrierInformationProvider> _carrierInfoProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMESuggestionsCarrierInformationProvider> carrierInfoProvider; // @synthesize carrierInfoProvider=_carrierInfoProvider;
- (_Bool)applyCarrierFilter:(id)arg1;
- (_Bool)filterSatisfiedWithSuggestion:(id)arg1;
- (id)init;
- (id)initWithCarrierInformationProvider:(id)arg1;

@end

