//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCOnboardingResourceDownloadServices, SCSystemScope, SCTermsOfUseScope, SCTermsOfUseWorkflow;

@interface SCTermsOfUseEntryPoint : SCEntryPoint
{
    SCTermsOfUseWorkflow *_termsOfUseWorkflow;
    SCSystemScope *_systemScope;
    SCTermsOfUseScope *_termsOfUseScope;
    SCOnboardingResourceDownloadServices *_downloaderServices;
}

@property(nonatomic) __weak SCOnboardingResourceDownloadServices *downloaderServices; // @synthesize downloaderServices=_downloaderServices;
@property(nonatomic) __weak SCTermsOfUseScope *termsOfUseScope; // @synthesize termsOfUseScope=_termsOfUseScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end

