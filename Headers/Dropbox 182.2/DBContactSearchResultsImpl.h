//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBContactSearchResults-Protocol.h>

@class NSString;

@interface DBContactSearchResultsImpl : NSObject <DBContactSearchResults>
{
    shared_ptr_b1b508ad _results;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithSearchResults:(shared_ptr_b1b508ad)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

