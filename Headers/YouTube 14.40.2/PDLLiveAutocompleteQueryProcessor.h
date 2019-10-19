//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDLQueryProcessorBase.h"

@class GPCPromise;

@interface PDLLiveAutocompleteQueryProcessor : PDLQueryProcessorBase
{
    _Bool _containsPartialResults;
    id <PDLDataService> _autocompleteDataService;
    id <PDLLookupPersonCache> _personCache;
    GPCPromise *_peopleAPIAutocompletePromise;
}

@property(nonatomic) _Bool containsPartialResults; // @synthesize containsPartialResults=_containsPartialResults;
@property(retain, nonatomic) GPCPromise *peopleAPIAutocompletePromise; // @synthesize peopleAPIAutocompletePromise=_peopleAPIAutocompletePromise;
@property(readonly, nonatomic) id <PDLLookupPersonCache> personCache; // @synthesize personCache=_personCache;
@property(readonly, nonatomic) id <PDLDataService> autocompleteDataService; // @synthesize autocompleteDataService=_autocompleteDataService;
- (void).cxx_destruct;
- (void)populatePersonCacheWithAutocompletions:(id)arg1;
- (long long)queryProcessorType;
- (void)cancel;
- (void)processQuery;
- (id)initWithDelegate:(id)arg1 context:(id)arg2 filter:(id)arg3 loadResultsQueue:(id)arg4;

@end

