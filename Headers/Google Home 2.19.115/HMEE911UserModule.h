//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMEE911NetworkService;

@interface HMEE911UserModule : NSObject
{
    CDUnknownBlockType _coordinatorFactory;
    HMEE911NetworkService *_e911NetworkService;
}

@property(readonly, nonatomic) HMEE911NetworkService *e911NetworkService; // @synthesize e911NetworkService=_e911NetworkService;
@property(readonly, nonatomic) CDUnknownBlockType coordinatorFactory; // @synthesize coordinatorFactory=_coordinatorFactory;
- (void).cxx_destruct;
- (id)initWithStructureData:(id)arg1 userData:(id)arg2 authorization:(id)arg3 environment:(id)arg4 flags:(id)arg5 analyticsLogger:(id)arg6 linkOpener:(id)arg7;

@end

