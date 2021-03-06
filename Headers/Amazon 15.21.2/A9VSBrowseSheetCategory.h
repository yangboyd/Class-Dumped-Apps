//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSBrowseSheetASIN, A9VSBrowseSheetNetworkManager, NSArray, NSCache, NSString, NSURLSessionTask, PisaARBrowseNodeProductDataRequest, PisaARCategoryDataResult, UIImage;

@interface A9VSBrowseSheetCategory : NSObject
{
    _Bool _isCampaignCategory;
    _Bool _showSelectedASIN;
    UIImage *_image;
    NSArray *_asinList;
    PisaARCategoryDataResult *_categoryData;
    unsigned long long _index;
    unsigned long long _currDisplayIndex;
    NSCache *_imageCache;
    NSURLSessionTask *_imageRequest;
    PisaARBrowseNodeProductDataRequest *_browseNodeRequest;
    A9VSBrowseSheetNetworkManager *_downloadManager;
    long long _currentPage;
    long long _maxPage;
    long long _availableCount;
    NSString *_sourceASIN;
    A9VSBrowseSheetASIN *_selectedASIN;
}

@property(nonatomic) _Bool showSelectedASIN; // @synthesize showSelectedASIN=_showSelectedASIN;
@property(retain, nonatomic) A9VSBrowseSheetASIN *selectedASIN; // @synthesize selectedASIN=_selectedASIN;
@property(retain, nonatomic) NSString *sourceASIN; // @synthesize sourceASIN=_sourceASIN;
@property(nonatomic) long long availableCount; // @synthesize availableCount=_availableCount;
@property(nonatomic) long long maxPage; // @synthesize maxPage=_maxPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak A9VSBrowseSheetNetworkManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) PisaARBrowseNodeProductDataRequest *browseNodeRequest; // @synthesize browseNodeRequest=_browseNodeRequest;
@property(retain, nonatomic) NSURLSessionTask *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(nonatomic) __weak NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) _Bool isCampaignCategory; // @synthesize isCampaignCategory=_isCampaignCategory;
@property(nonatomic) unsigned long long currDisplayIndex; // @synthesize currDisplayIndex=_currDisplayIndex;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) PisaARCategoryDataResult *categoryData; // @synthesize categoryData=_categoryData;
@property(retain, nonatomic) NSArray *asinList; // @synthesize asinList=_asinList;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)categorySpecialtyId;
- (void)fetchASINMetaDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSpecialtyCategoryWithASIN:(id)arg1;
- (void)updateMaxPageForAvailableCount:(long long)arg1;
- (void)updateASINListWithData:(id)arg1;
- (void)showSelectedASIN:(_Bool)arg1;
- (_Bool)isEqualToCategoryId:(id)arg1;
- (_Bool)hasMoreASINData;
- (_Bool)isRelatedItemsCategory;
- (id)initWithPISAResultData:(id)arg1 imageCache:(id)arg2 downloadManager:(id)arg3;

@end

