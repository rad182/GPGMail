/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Mail/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFRemoveMessagesUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;
}

@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)cleanUpAfterRemovingMessagesWithRowIDs:(id)arg1 subjects:(id)arg2 senders:(id)arg3;
- (void)removeMessagesWithRowIDs:(id)arg1 rowIDsByMailboxURLStrings:(id)arg2;
- (id)initWithSQLHandle:(id)arg1;
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;

@end
