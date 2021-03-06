//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ZDKHelpCenterSearch : NSObject
{
    NSString *_query;
    NSMutableArray *_labelNames;
    NSString *_locale;
    NSMutableArray *_sideLoads;
    NSArray *_categoryIds;
    NSArray *_sectionIds;
    NSNumber *_page;
    NSNumber *_resultsPerPage;
}

@property(retain, nonatomic) NSNumber *resultsPerPage; // @synthesize resultsPerPage=_resultsPerPage;
@property(retain, nonatomic) NSNumber *page; // @synthesize page=_page;
@property(copy, nonatomic) NSArray *sectionIds; // @synthesize sectionIds=_sectionIds;
@property(copy, nonatomic) NSArray *categoryIds; // @synthesize categoryIds=_categoryIds;
@property(copy, nonatomic) NSMutableArray *sideLoads; // @synthesize sideLoads=_sideLoads;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSMutableArray *labelNames; // @synthesize labelNames=_labelNames;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)addSearchContentScope:(id)arg1;
- (id)queryStringWithLocale:(id)arg1;
- (id)init;

@end

