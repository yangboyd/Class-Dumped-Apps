//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHMCastQuestionVoteRequest, GHMClearQuestionsRequest, GHMCreateQuestionRequest, GHMDeleteQuestionRequest, GHMListQuestionSeriesMetadataRequest, GHMListQuestionsRequest, GHMUpdateQuestionRequest, GHMUpdateQuestionSeriesMetadataRequest, GRPCProtoCall;

@protocol GHMMeetingQuestionService <NSObject>
- (GRPCProtoCall *)RPCToCastQuestionVoteWithRequest:(GHMCastQuestionVoteRequest *)arg1 handler:(void (^)(GHMCastQuestionVoteResponse *, NSError *))arg2;
- (void)castQuestionVoteWithRequest:(GHMCastQuestionVoteRequest *)arg1 handler:(void (^)(GHMCastQuestionVoteResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToClearQuestionsWithRequest:(GHMClearQuestionsRequest *)arg1 handler:(void (^)(GHMClearQuestionsResponse *, NSError *))arg2;
- (void)clearQuestionsWithRequest:(GHMClearQuestionsRequest *)arg1 handler:(void (^)(GHMClearQuestionsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToDeleteQuestionWithRequest:(GHMDeleteQuestionRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (void)deleteQuestionWithRequest:(GHMDeleteQuestionRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (GRPCProtoCall *)RPCToUpdateQuestionWithRequest:(GHMUpdateQuestionRequest *)arg1 handler:(void (^)(GHMQuestion *, NSError *))arg2;
- (void)updateQuestionWithRequest:(GHMUpdateQuestionRequest *)arg1 handler:(void (^)(GHMQuestion *, NSError *))arg2;
- (GRPCProtoCall *)RPCToListQuestionsWithRequest:(GHMListQuestionsRequest *)arg1 handler:(void (^)(GHMListQuestionsResponse *, NSError *))arg2;
- (void)listQuestionsWithRequest:(GHMListQuestionsRequest *)arg1 handler:(void (^)(GHMListQuestionsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToCreateQuestionWithRequest:(GHMCreateQuestionRequest *)arg1 handler:(void (^)(GHMQuestion *, NSError *))arg2;
- (void)createQuestionWithRequest:(GHMCreateQuestionRequest *)arg1 handler:(void (^)(GHMQuestion *, NSError *))arg2;
- (GRPCProtoCall *)RPCToUpdateQuestionSeriesMetadataWithRequest:(GHMUpdateQuestionSeriesMetadataRequest *)arg1 handler:(void (^)(GHMQuestionSeriesMetadata *, NSError *))arg2;
- (void)updateQuestionSeriesMetadataWithRequest:(GHMUpdateQuestionSeriesMetadataRequest *)arg1 handler:(void (^)(GHMQuestionSeriesMetadata *, NSError *))arg2;
- (GRPCProtoCall *)RPCToListQuestionSeriesMetadataWithRequest:(GHMListQuestionSeriesMetadataRequest *)arg1 handler:(void (^)(GHMListQuestionSeriesMetadataResponse *, NSError *))arg2;
- (void)listQuestionSeriesMetadataWithRequest:(GHMListQuestionSeriesMetadataRequest *)arg1 handler:(void (^)(GHMListQuestionSeriesMetadataResponse *, NSError *))arg2;
@end

