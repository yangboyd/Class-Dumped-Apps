//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPFeedbackFAQItemSyncProperties-Protocol.h"
#import "BDPMVVMTableViewCellViewModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface BDPFeedbackFAQItemViewModel : NSObject <BDPMVVMTableViewCellViewModelProtocol, BDPFeedbackFAQItemSyncProperties>
{
    NSString *qrId;
    NSString *qrName;
    NSString *qrValue;
    NSArray *relatedItems;
    unsigned long long _cellType;
}

@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSArray *relatedItems; // @synthesize relatedItems;
@property(copy, nonatomic) NSString *qrValue; // @synthesize qrValue;
@property(copy, nonatomic) NSString *qrName; // @synthesize qrName;
@property(copy, nonatomic) NSString *qrId; // @synthesize qrId;
- (void).cxx_destruct;
- (id)mvvmPropertySyncProtocol;
- (double)viewHeight;
- (void)updateViewModelWithModel:(id)arg1 atIndexPath:(id)arg2;
- (void)updateViewModelWithModel:(id)arg1;
- (id)modelUniqueKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

