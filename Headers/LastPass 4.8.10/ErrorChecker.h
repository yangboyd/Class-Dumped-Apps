//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSString;

@interface ErrorChecker : NSObject <NSXMLParserDelegate>
{
    _Bool _notloggedin;
    _Bool _oldretry;
    NSString *_cause;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool oldretry; // @synthesize oldretry=_oldretry;
@property(nonatomic) _Bool notloggedin; // @synthesize notloggedin=_notloggedin;
@property(retain, nonatomic) NSString *cause; // @synthesize cause=_cause;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)getcause;
- (_Bool)getoldretry;
- (_Bool)getnotloggedin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

