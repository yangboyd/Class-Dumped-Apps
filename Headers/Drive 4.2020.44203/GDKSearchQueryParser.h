//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GDKSearchQueryParser : NSObject
{
    NSArray *_searchQueryTokens;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *searchQueryTokens; // @synthesize searchQueryTokens=_searchQueryTokens;
@property(readonly, copy, nonatomic) NSArray *actionItemFilters;
- (void)clearSearchQuery:(id)arg1;
- (void)updateSearchQuery:(id)arg1;
- (id)init;

@end

