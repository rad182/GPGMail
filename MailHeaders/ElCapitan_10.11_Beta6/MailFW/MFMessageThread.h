/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCMessage.h"

@class MFMailbox, NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSString;

@interface MFMessageThread : MCMessage
{
    NSMutableArray *_filteredMessages;
    NSString *_formattedUnreadMessageCount;
    NSMutableDictionary *_pendingChanges;
    MCMessage *_newestMessage;
    MCMessage *_oldestMessage;
    MCMessage *_newestReceivedMessage;
    MCMessage *_newestSentMessage;
    MCMessage *_newestReadMessage;
    MCMessage *_snippetMessage;
    MCMessage *_messageWithHighestLibraryID;
    NSIndexSet *_primaryMessageIndexes;
    unsigned int _unreadMessageCount;
    unsigned int _flaggedMessageCount;
    unsigned int _junkMessageCount;
    unsigned int _attachmentCount;
    BOOL _isThreadOpen;
    BOOL _showDateInSubject;
}

+ (id)sendersStringForMessages:(id)arg1 primaryIndexes:(id)arg2;
+ (id)findMessageWithHighestLibraryIDInMessages:(id)arg1;
+ (id)findSnippetMessageInMessages:(id)arg1;
+ (id)findOldestMessageInMessages:(id)arg1;
+ (id)findNewestReadMessageInMessages:(id)arg1;
+ (id)findNewestSentMessageInMessages:(id)arg1;
+ (id)findNewestReceivedMessageInMessages:(id)arg1;
+ (id)findNewestMessageInMessages:(id)arg1;
+ (id)messagesByExpandingThreads:(id)arg1;
@property BOOL showDateInSubject; // @synthesize showDateInSubject=_showDateInSubject;
@property BOOL isThreadOpen; // @synthesize isThreadOpen=_isThreadOpen;
- (void).cxx_destruct;
- (id)_threadComparator;
- (id)allContainingLabelsAndMailboxes;
- (id)gmailLabels;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly) MCMessage *messageWithHighestLibraryID;
- (void)_setJunkFlags;
@property(readonly) MCMessage *snippetMessage;
@property(readonly) MCMessage *newestReadMessage;
@property(readonly) MCMessage *newestSentMessage;
@property(readonly) MCMessage *newestMessage;
@property(readonly) MCMessage *oldestMessage;
- (void)sortMessagesUsingComparator:(id)arg1;
- (BOOL)willBeDeletedIfMessagesAreDeleted:(id)arg1;
@property BOOL isOpen;
- (BOOL)isThread;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateFilteredMessages:(id)arg1;
- (unsigned long long)numberOfAttachments;
- (unsigned long long)messageSize;
- (id)messageBody;
- (id)dataSource;
- (id)messageID;
- (id)senderDisplayNameInfo;
- (id)senderDisplayName;
@property(readonly, copy) NSString *sendersString;
- (id)sender;
- (double)dateLastViewedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (double)dateReceivedAsTimeIntervalSince1970;
- (id)subject;
- (id)to;
- (void)setOldestMessage:(id)arg1;
- (void)setNewestSentMessage:(id)arg1;
- (void)setNewestReceivedMessage:(id)arg1;
- (void)setNewestMessage:(id)arg1;
@property(readonly) unsigned long long numberOfUnreadMessages;
- (id)objectInFilteredMessagesAtIndex:(unsigned long long)arg1;
@property(readonly, copy) NSArray *filteredMessages;
@property(readonly) unsigned long long countOfFilteredMessages;
@property(readonly, copy) NSString *formattedUnreadMessageCount;
- (id)_numberFormatter;
- (void)updateSubjectEtc;
- (BOOL)flagsHaveChanged;
- (BOOL)commitPendingChangesForTaskID:(id)arg1;
- (void)messageBecamePrimary:(id)arg1;
- (void)replaceMessage:(id)arg1 withMessage:(id)arg2;
- (id)deleteMessages:(id)arg1;
- (id)addMessages:(id)arg1 secondaryMessages:(id)arg2;
@property(readonly) long long conversationID;
- (id)_changeDictionaryForTaskID:(id)arg1 toModify:(BOOL)arg2;
- (void)dealloc;
- (id)appliedFlagColors;
- (id)init;

@end
