//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSMutableArray, NSString;

@interface AWECommonRelationListDataController : AWEListDataController
{
    NSString *_subTitle;
    NSString *_userID;
    NSMutableArray *_datasource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (id)paramsForNetworkService;
- (id)URLForNetworkService;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserID:(id)arg1;

@end

