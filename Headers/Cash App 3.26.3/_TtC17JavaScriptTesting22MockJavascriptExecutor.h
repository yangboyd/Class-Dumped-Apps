//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class JSValue;

@interface _TtC17JavaScriptTesting22MockJavascriptExecutor : _TtCs12_SwiftObject
{
    // Error parsing type: , name: executedMethodNames
    // Error parsing type: , name: passedInArguments
    // Error parsing type: , name: scriptRetrievalURL
    // Error parsing type: , name: javascriptContext
    // Error parsing type: , name: script
}

- (void)retrieveScriptFrom:(id)arg1;
- (id)executeInJavascriptContext:(id)arg1 withArguments:(id)arg2;
- (id)executeScriptInJavascriptContextWithArguments:(id)arg1;
- (void)cancelExistingJavascriptOperations;
- (void)executeOnceScriptIsLoadedAndCancelExistingOperationsWithCancellableBlock:(CDUnknownBlockType)arg1;
- (void)executeOnceScriptIsLoadedWithBlock:(CDUnknownBlockType)arg1 cancellable:(_Bool)arg2 executionQueue:(id)arg3;
- (void)executeOnceScriptIsLoadedWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, retain) JSValue *script; // @synthesize script;

@end

