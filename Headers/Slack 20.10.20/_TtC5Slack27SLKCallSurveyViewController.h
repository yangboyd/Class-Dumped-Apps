//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel, UITableView, UIView;

@interface _TtC5Slack27SLKCallSurveyViewController : UIViewController
{
    // Error parsing type: , name: callSurveyDidEnd
    // Error parsing type: , name: buttonsContainerView
    // Error parsing type: , name: confirmationView
    // Error parsing type: , name: confirmationViewTitle
    // Error parsing type: , name: completionImageView
    // Error parsing type: , name: tableView
    // Error parsing type: , name: questionLabel
    // Error parsing type: , name: questionGoodLabel
    // Error parsing type: , name: questionHadIssuesLabel
    // Error parsing type: , name: textView
    // Error parsing type: , name: submitButton
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: mediaBackend
    // Error parsing type: , name: heightHeader
    // Error parsing type: , name: selectedIndex
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)submitSurvey;
- (void)dimissCallSurvey;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)badExperienceButtonTapped:(id)arg1;
- (void)goodExperienceButtonTapped:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDependencies:(id)arg1;
@property(nonatomic) __weak UILabel *questionHadIssuesLabel; // @synthesize questionHadIssuesLabel;
@property(nonatomic) __weak UILabel *questionGoodLabel; // @synthesize questionGoodLabel;
@property(nonatomic) __weak UILabel *questionLabel; // @synthesize questionLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak UIImageView *completionImageView; // @synthesize completionImageView;
@property(nonatomic) __weak UILabel *confirmationViewTitle; // @synthesize confirmationViewTitle;
@property(nonatomic) __weak UIView *confirmationView; // @synthesize confirmationView;
@property(nonatomic) __weak UIView *buttonsContainerView; // @synthesize buttonsContainerView;
@property(nonatomic, copy) CDUnknownBlockType callSurveyDidEnd;

@end

