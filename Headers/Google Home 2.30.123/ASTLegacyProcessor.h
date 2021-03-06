//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTAssistantServices, ASTResponsePresenter;
@protocol ASTActionV2Executor, ASTLegacyProcessorDelegate;

@interface ASTLegacyProcessor : NSObject
{
    id <ASTLegacyProcessorDelegate> _delegate;
    ASTAssistantServices *_services;
    id <ASTActionV2Executor> _lastActionExecutor;
    ASTResponsePresenter *_presenter;
}

+ (id)actionTypeStringFromAction:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ASTResponsePresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) id <ASTActionV2Executor> lastActionExecutor; // @synthesize lastActionExecutor=_lastActionExecutor;
@property(nonatomic) __weak ASTAssistantServices *services; // @synthesize services=_services;
@property(nonatomic) __weak id <ASTLegacyProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)maybeDisguiseActionV2InSearchResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSegments:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)presentationSegmentsForActionFromSearchResult:(id)arg1;
- (void)processSearchResultWithAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)presentationSegmentsForAssistantResponseFromSearchResult:(id)arg1;
- (void)processSearchResultWithoutAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)processSearchResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServices:(id)arg1;

@end

