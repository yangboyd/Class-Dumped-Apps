//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTElementsNodeExtensionRegistryData : NSObject
{
    unsigned int _extensionNumber;
    Class _nodeClass;
    CDUnknownBlockType _creationBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly, nonatomic) Class nodeClass; // @synthesize nodeClass=_nodeClass;
@property(readonly, nonatomic) unsigned int extensionNumber; // @synthesize extensionNumber=_extensionNumber;
- (id)initWithExtensionNumber:(unsigned int)arg1 nodeClass:(Class)arg2 creationBlock:(CDUnknownBlockType)arg3;
- (id)initWithExtensionNumber:(unsigned int)arg1 nodeClass:(Class)arg2;

@end

