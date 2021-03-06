//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt32Array, NSMutableArray, NSString, ORCH2AutocompleteProviderDataAttributes;

@interface ORCH2AutocompletePreloadedOptionProviderData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *autocompleteFieldIdArray; // @dynamic autocompleteFieldIdArray;
@property(readonly, nonatomic) unsigned long long autocompleteFieldIdArray_Count; // @dynamic autocompleteFieldIdArray_Count;
@property(retain, nonatomic) ORCH2AutocompleteProviderDataAttributes *autocompleteProviderDataAttributes; // @dynamic autocompleteProviderDataAttributes;
@property(copy, nonatomic) NSString *formatString; // @dynamic formatString;
@property(nonatomic) _Bool hasAutocompleteProviderDataAttributes; // @dynamic hasAutocompleteProviderDataAttributes;
@property(nonatomic) _Bool hasFormatString; // @dynamic hasFormatString;
@property(retain, nonatomic) NSMutableArray *preloadedAutocompleteOptionArray; // @dynamic preloadedAutocompleteOptionArray;
@property(readonly, nonatomic) unsigned long long preloadedAutocompleteOptionArray_Count; // @dynamic preloadedAutocompleteOptionArray_Count;

@end

