//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class SRDSCategoriesRefinementsModel, SRDSCategoriesResponseMetadataModel, SRDSCategoriesTrackingInfoModel;
@protocol Optional;

@interface SRDSCategoriesModel : JSONModel
{
    SRDSCategoriesResponseMetadataModel<Optional> *_responseMetadata;
    SRDSCategoriesRefinementsModel *_refinements;
    SRDSCategoriesTrackingInfoModel<Optional> *_trackingInfo;
}

@property(retain, nonatomic) SRDSCategoriesTrackingInfoModel<Optional> *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(retain, nonatomic) SRDSCategoriesRefinementsModel *refinements; // @synthesize refinements=_refinements;
@property(retain, nonatomic) SRDSCategoriesResponseMetadataModel<Optional> *responseMetadata; // @synthesize responseMetadata=_responseMetadata;
- (void).cxx_destruct;

@end

