//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class AWEVisionSearchObjectModel, AWEVisionSearchResponseModel, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface AWEVisionSearchDataController : AWEListDataController
{
    _Bool _isManual;
    NSString *_sessionID;
    NSString *_awemeID;
    double _playtime;
    NSDictionary *_predictDictionary;
    NSString *_searchID;
    NSData *_imageData;
    NSMutableArray *_dataModels;
    AWEVisionSearchObjectModel *_objectModel;
    AWEVisionSearchResponseModel *_responseModel;
    NSString *_queryType;
    NSString *_contentHash;
    NSMutableDictionary *_params;
}

@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(nonatomic) _Bool isManual; // @synthesize isManual=_isManual;
@property(retain, nonatomic) AWEVisionSearchResponseModel *responseModel; // @synthesize responseModel=_responseModel;
@property(retain, nonatomic) AWEVisionSearchObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) NSMutableArray *dataModels; // @synthesize dataModels=_dataModels;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(copy, nonatomic) NSDictionary *predictDictionary; // @synthesize predictDictionary=_predictDictionary;
@property(nonatomic) double playtime; // @synthesize playtime=_playtime;
@property(copy, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)calculateFilteredDataSource;
- (void)parseData:(id)arg1;
- (void)parseAllData:(id)arg1;

@end

