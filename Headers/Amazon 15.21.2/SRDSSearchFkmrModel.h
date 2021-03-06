//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, SRDSSearchLinkModel, SRDSSearchResultSectionModel;
@protocol Optional, SRDSSearchStyledTextModel><Optional;

@interface SRDSSearchFkmrModel : JSONModel
{
    SRDSSearchResultSectionModel<Optional> *_results;
    SRDSSearchLinkModel<Optional> *_seeAllLink;
    NSNumber<Optional> *_totalResults;
    NSArray<SRDSSearchStyledTextModel><Optional> *_styledText;
    NSArray<SRDSSearchStyledTextModel><Optional> *_keywords;
    NSArray<SRDSSearchStyledTextModel><Optional> *_message;
}

@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *message; // @synthesize message=_message;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *styledText; // @synthesize styledText=_styledText;
@property(retain, nonatomic) NSNumber<Optional> *totalResults; // @synthesize totalResults=_totalResults;
@property(retain, nonatomic) SRDSSearchLinkModel<Optional> *seeAllLink; // @synthesize seeAllLink=_seeAllLink;
@property(retain, nonatomic) SRDSSearchResultSectionModel<Optional> *results; // @synthesize results=_results;
- (void).cxx_destruct;

@end

