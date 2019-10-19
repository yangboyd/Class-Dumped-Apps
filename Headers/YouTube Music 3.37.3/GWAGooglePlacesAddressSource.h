//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAAutocompleteAddressSource-Protocol.h"

@class NSString;

@interface GWAGooglePlacesAddressSource : NSObject <GWAAutocompleteAddressSource>
{
}

+ (id)urlEscapeString:(id)arg1;
+ (_Bool)autocompleteAvailableForCountry:(id)arg1;
+ (_Bool)autocompleteAvailableForField:(long long)arg1;
+ (id)requestTypeForField:(BOOL)arg1;
+ (id)sharedInstance;
- (id)requestUrlForInput:(id)arg1 type:(id)arg2 language:(id)arg3 restrictToCountry:(id)arg4;
- (id)autocompleteAddressesFromJson:(id)arg1 language:(id)arg2;
- (void)fetchJsonForPrefix:(id)arg1 field:(BOOL)arg2 language:(id)arg3 restrictToCountry:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)loadAddressesForPrefix:(id)arg1 field:(BOOL)arg2 restrictToCountry:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

