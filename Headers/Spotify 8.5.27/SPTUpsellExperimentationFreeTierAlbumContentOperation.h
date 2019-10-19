//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@protocol HUBContentOperationDelegate, SPTUpsellExperimentationTestManager;

@interface SPTUpsellExperimentationFreeTierAlbumContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    id <SPTUpsellExperimentationTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTUpsellExperimentationTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)configureSecondaryCTAHeaderComponentModelBuilder:(id)arg1;
- (void)addloggingForSubtextButtonDictionary:(id)arg1;
- (void)addCommandModelBuilderForComponentModelBuilder:(id)arg1;
- (void)performSecondaryCTAVariantForViewModelBuilder:(id)arg1;
- (void)performSubtextVariantForViewModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithTestManager:(id)arg1;

@end

