//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSIntArray, IOSObjectArray, JSLInjectedGlobals, JSLRenderArtifacts, JSLRenderContext, JSLTemplatePool;
@protocol ComGoogleTemplateJslayoutIdlRuntimeServiceDispatcher, JSLTreeBuilder;

@interface JSLExpressionInterpreter : NSObject
{
    JSLTemplatePool *templatePool_;
    id <JSLTreeBuilder> output_;
    JSLRenderContext *renderContext_;
    JSLRenderArtifacts *renderArtifacts_;
    id <ComGoogleTemplateJslayoutIdlRuntimeServiceDispatcher> serviceDispatcher_;
    IOSIntArray *expr_;
    JSLInjectedGlobals *globals_;
    IOSObjectArray *stringTable_;
    IOSObjectArray *context_;
    int languageIndex_;
    int pc_;
    int initialPc_;
}

- (void)dealloc;
- (id)getDebugString;
- (id)evalNextString;
- (id)evalNextProto;
- (id)buildProto;
- (id)evalNextMutableProto;
- (id)evalNextList;
- (int)evalNextInt;
- (double)evalNextFloat;
- (id)evalNextDict;
- (_Bool)evalNextBool;
- (id)evalNext;
- (id)prepareWithInt:(int)arg1;

@end

