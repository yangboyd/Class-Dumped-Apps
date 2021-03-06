//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"
#import "ServerRequestHandlerDelegate-Protocol.h"

@class LPEmergencyAccessModel, NSMutableDictionary, NSString;

@interface LPEmergencyAccessModelCompletionProxy : NSObject <ServerRequestHandlerDelegate, NSXMLParserDelegate>
{
    _Bool _success;
    CDUnknownBlockType _completion;
    LPEmergencyAccessModel *_model;
    NSMutableDictionary *_responseDictionary;
}

+ (id)proxyWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSMutableDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(nonatomic) LPEmergencyAccessModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)serverRequestFailed:(id)arg1 withError:(id)arg2;
- (void)serverRequestSucceeded:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

