//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IESLiveMTMessageDeleteManager : NSObject
{
    NSMutableArray *_deleteMessageIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *deleteMessageIds; // @synthesize deleteMessageIds=_deleteMessageIds;
- (_Bool)shouldBeDeleted:(id)arg1;
- (void)findMessageInMessages:(id)arg1 messageId:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)deleteMessageInBuffer:(id)arg1 messageId:(long long)arg2;
- (id)init;

@end

