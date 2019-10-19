//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewController.h"

#import "YTResponder-Protocol.h"

@class NSString, YTLegalReportDetailsSectionController;
@protocol YTResponder;

@interface YTLegalReportDetailsContentViewController : YTCollectionViewController <YTResponder>
{
    YTLegalReportDetailsSectionController *_sectionController;
}

- (void).cxx_destruct;
- (id)legalReportDetailsCell;
- (void)focusOnFirstError;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) int affiliation;
@property(readonly, nonatomic) int issueType;
@property(readonly, nonatomic) NSString *issueDescription;
@property(readonly, nonatomic) unsigned int timestampSeconds;
@property(readonly, nonatomic) unsigned int timestampMinutes;
- (void)viewDidLoad;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

