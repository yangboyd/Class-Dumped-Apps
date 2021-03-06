//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class IGCaptionCell, IGSurveyDataProvider, IGSurveyHeaderView, IGSurveyQuestionObj, NSMutableSet;

@interface IGSurveyCheckBoxViewController : IGGroupedTableViewController
{
    IGSurveyHeaderView *_headerView;
    IGCaptionCell *_textInputCell;
    IGSurveyDataProvider *_dataProvider;
    IGSurveyQuestionObj *_question;
    NSMutableSet *_selectedOptions;
}

@property(retain, nonatomic) NSMutableSet *selectedOptions; // @synthesize selectedOptions=_selectedOptions;
@property(readonly, nonatomic) IGSurveyQuestionObj *question; // @synthesize question=_question;
@property(readonly, nonatomic) IGSurveyDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) IGCaptionCell *textInputCell; // @synthesize textInputCell=_textInputCell;
@property(retain, nonatomic) IGSurveyHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_createHeaderView;
- (void)_dismissSurvey;
- (_Bool)_decideIsLastOptionWithoutInputAllowedWitOption:(id)arg1;
- (void)_nextView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithQuestion:(id)arg1 dataProvider:(id)arg2;

@end

