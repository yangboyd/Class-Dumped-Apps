//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEConcernVisitFrequentUserModel, IESLiveMTFeedCellModel;

@interface AWELiveSkylightCellModel : NSObject
{
    IESLiveMTFeedCellModel *_liveCellModel;
    AWEConcernVisitFrequentUserModel *_userCellModel;
    long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) AWEConcernVisitFrequentUserModel *userCellModel; // @synthesize userCellModel=_userCellModel;
@property(retain, nonatomic) IESLiveMTFeedCellModel *liveCellModel; // @synthesize liveCellModel=_liveCellModel;

@end

